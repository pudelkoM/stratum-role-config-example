#include "stratum/public/proto/p4_role_config.pb.h"

int main() {
    stratum::P4RoleConfig role_config;

    role_config.add_exclusive_p4_ids(100);
    role_config.add_exclusive_p4_ids(250);
    role_config.set_can_push_pipeline(true);
    role_config.mutable_packet_in_filter()->set_metadata_id(1);
    role_config.mutable_packet_in_filter()->set_value("\xff");

    std::cout << role_config.DebugString() << '\n';
}
