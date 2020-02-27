for(Timeline::iterator it = timeline.begin(); it != end_it; ++it)
{
  Bucket& bucket = it->second;
  const Bucket::iterator removed =
      std::remove_if(bucket.begin(), bucket.end(),
        [&](const internal::ConstEntryPtr& entry) -> bool
        {
          return *entry->trajectory.finish_time() < time;
        });
}
