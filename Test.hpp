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

elements.emplace_back(Viewer::View::Element{
  entry->version, entry->trajectory});

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
  } ();

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


void func()
{
  return Result{
    std::move(trajectories),
    std::move(waypoints),
    starts[start_index],
    std::move(goal),
    std::move(options)
  };
}

namespace p {
namespace q {

const auto remove_it = std::remove_if(
  _pimpl->itinerary.begin(),
  _pimpl->itinerary.end(),
  [&](const Writer::Item& item)
{
  return input_routes.count(item.id) > 0;
});

} // namespace q
} // namespace p

foo.emplace(std::make_shared<Bar>(
  Bar{
    a,
    b,
    b,
  }));


foo.emplace_back(
  Bar{
    a,
    b,
    c
  });

Foo::Foo(
  A a,
  B b)
: _bar(std::make_shared<Bar>(
    Bar{
      a,
      b,
      }))
{

}

if (min_size < 2)
{
  throw invalid_trajectory_error::Implementation
        ::make_segment_num_error(min_size);
}

const Trajectory::const_iterator begin_it =
  trajectory_start_time < start_time ?
    trajectory.find(start_time) : ++trajectory.begin();

const Eigen::Vector2d p = n->waypoint ?
  graph.waypoints[*n->waypoint].get_location() :
  n->trajectory_from_parent.back().get_finish_position()
    .template block<2, 1>(0, 0);

rmf_utils::optional<Plan> Plan::replan(const Start& new_start) const
{
  return Plan::Implementation::generate(
    _pimpl->cache_mgr,  DifferentialDriveCache(agv::Planner::Configuration config)
  : _config(std::move(config)),
    _graph(agv::Graph::Implementation::get(_config.graph())),
    _traits(_config.vehicle_traits()),
    _profile(_traits.get_profile()),
    _interpolate(agv::Interpolate::Options::Implementation::get(
        _config.interpolation()))
  {
    // Do nothing
  }

    {new_start},
    _pimpl->result.goal,
    _pimpl->result.options);
}

rmf_utils::optional<Plan> Planner::plan(const Start& start, Goal goal) const
{
  return Plan::Implementation::generate(
        _pimpl->cache_mgr,
        {start},
        std::move(goal),
        _pimpl->default_options);
}

foo.emplace_back(Bar{
  a,
  b,
  c
  });

DifferentialDriveCache(agv::Planner::Configuration config)
: _config(std::move(config)),
  _graph(agv::Graph::Implementation::get(_config.graph())),
  _traits(_config.vehicle_traits()),
  _profile(_traits.get_profile()),
  _interpolate(agv::Interpolate::Options::Implementation::get(
      _config.interpolation()))
{
  // Do nothing
}


