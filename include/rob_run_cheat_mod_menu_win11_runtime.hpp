#pragma once
#include <cstdint>

namespace rob_run_cheat_mod_menu_win11 {
inline constexpr const char* kModuleName = "rob-run-cheat-mod-menu-win11";
inline constexpr const char* kBuildSalt = "1f2cf178a8b9bd71";
struct RuntimeConfig {
    uint32_t target_fps = 144;
    float fov_radius = 65.0f;
    float smooth_factor = 1.45f;
    bool draw_bounds = true;
};
} // namespace rob_run_cheat_mod_menu_win11
