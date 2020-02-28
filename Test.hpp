class Shape::Internal
{
public:

  virtual CollisionGeometries make_fcl() const = 0;

};

Planner::Configuration::Configuration(
  Graph graph,
  VehicleTraits traits,
  Interpolate::Options interpolation)
: _pimpl(rmf_utils::make_impl<Implementation>(
    Implementation{
      std::move(graph),
      std::move(traits),
      std::move(interpolation)
      }))
{
  // Do nothing
}

relevant_changes.emplace_back(
  make_insert_ref{
    &entry->trajectory, entry->version});

relevant_changes.emplace_back(
  Database::Change::Implementation::make_insert_ref(
    &entry->trajectory, entry->version));


result._pimpl = rmf_utils::make_impl<Implementation>(
  Implementation{make_deep(std::move(trajectory)),
    std::forward<Args>(args)...});

result._pimpl = rmf_utils::make_impl<FinalShape::Implementation>(
  FinalShape::Implementation{std::move(shape),
    std::move(collisions),
    characteristic_length});

span._pimpl->maps = std::unordered_set<std::string>{
  std::make_move_iterator(maps.begin()),
  std::make_move_iterator(maps.end())};

for (Timeline::iterator it = timeline.begin(); it != end_it; ++it)
{
  Bucket& bucket = it->second;
  const Bucket::iterator removed =
    std::remove_if(bucket.begin(), bucket.end(),
    [&](const internal::ConstEntryPtr& entry) -> bool
    {
      return *entry->trajectory.finish_time() < time;
    });

  for (Bucket::iterator bit = removed; bit != bucket.end(); ++bit)
    culled.insert((*bit)->version);

  bucket.erase(removed, bucket.end());
}

DerivedExecutor& execute(DerivedExecutor& executor) const
{
  return static_cast<DerivedExecutor&>(
    execute(static_cast<Executor&>(executor)));
}

if (destination->data.finish_time == new_time)
{
  // The new time conflicts with an existing time, so we will throw an
  // exception.
  throw std::invalid_argument(
    "[Trajectory::Segment::set_finish_time] Attempted to set time to "
    + std::to_string(new_time.time_since_epoch().count())
    + "ns, but a waypoint already exists at that timestamp.");
}

Trajectory::InsertionResult Trajectory::insert(
  Time finish_time,
  ConstProfilePtr profile,
  Eigen::Vector3d position,
  Eigen::Vector3d velocity)
{
  return _pimpl->insert(
    internal::SegmentElement::Data{
      std::move(finish_time),
      std::move(profile),
      std::move(position),
      std::move(velocity)});
}

bool VehicleTraits::valid() const
{
  const bool steering_valid = [&]() -> bool
  {
    if (_pimpl->_steering_mode == Steering::Differential)
      return get_differential()->valid();

    return true;
  }();

  return linear().valid() && rotational().valid() && steering_valid;
}

// 

bool A::a() const
{
  const bool c =
    [&]() -> bool
  {
    if (_pimpl->_steering_mode == Steering::Differential)
      return get_differential()->valid();

    return true;
  }();

  return linear().valid() && rotational().valid() && steering_valid;
}

queue.emplace(std::make_shared<Node>(
  Node{
    args.waypoint,
    estimate_remaining_cost(location),
    0.0,
    location,
    nullptr
  }));
