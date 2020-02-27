void Viewer::Implementation::cull(Version id, Time time)
{
  cull_has_occurred = true;
  last_cull = std::make_pair(id, time);

  std::unordered_set<Version> culled;
  for(auto& pair : timelines)
  {
    Timeline& timeline = pair.second;
    const Timeline::iterator last_it = timeline.lower_bound(time);
    const Timeline::iterator end_it = last_it == timeline.end()?
          timeline.end() : ++Timeline::iterator(last_it);

    for(Timeline::iterator it = timeline.begin(); it != end_it; ++it)
    {
      Bucket& bucket = it->second;
      const Bucket::iterator removed =
          std::remove_if(bucket.begin(), bucket.end(),
                     [&](const internal::ConstEntryPtr& entry) -> bool
      {
        return *entry->trajectory.finish_time() < time;
      });

      for(Bucket::iterator bit = removed; bit != bucket.end(); ++bit)
        culled.insert((*bit)->version);

      bucket.erase(removed, bucket.end());
    }
  }
}
