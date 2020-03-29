if (!negotiation)
{
  RCLCPP_WARN(
        get_logger(),
        "Received rejection for unknown negotiation ["
        + std::to_string(msg.conflict_version) + "]");
  return;
}
