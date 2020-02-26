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
