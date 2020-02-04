auto Graph::add_waypoint(
    std::string map_name,
    Eigen::Vector2d location,
    const bool is_holding_point) -> Waypoint&
{
  _pimpl->waypoints.emplace_back(
        Waypoint::Implementation::make(
          _pimpl->waypoints.size(),
          std::move(map_name), std::move(location), is_holding_point));

  _pimpl->lanes_from.push_back({});

  return _pimpl->waypoints.back();
}