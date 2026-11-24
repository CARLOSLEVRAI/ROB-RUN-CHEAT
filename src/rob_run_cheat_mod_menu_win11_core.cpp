#include "../include/rob_run_cheat_mod_menu_win11_runtime.hpp"
#include <windows.h>
#include <atomic>

namespace rob_run_cheat_mod_menu_win11 {
static std::atomic<bool> g_running{true};
void PollHotkeys(bool& menu_open) noexcept {
    if (GetAsyncKeyState(VK_INSERT) & 1) menu_open = !menu_open;
    if (GetAsyncKeyState(VK_END) & 1) g_running.store(false, std::memory_order_relaxed);
}
} // namespace rob_run_cheat_mod_menu_win11

int main() {
    bool menu_open = true;
    while (rob_run_cheat_mod_menu_win11::g_running.load(std::memory_order_relaxed)) {
        rob_run_cheat_mod_menu_win11::PollHotkeys(menu_open);
        Sleep(6);
    }
    return 0;
}
