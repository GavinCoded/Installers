// The most shit code you will ever see! / Gavin
#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <thread>
// All these files must be in the same directory for it to work
int main() {
    const char* files[] = {
        "Abyss-Overlay-Setup-v2.0.3-ia32.exe",
        "Cloudflare_WARP_Release-x64.msi",
        "Everything-1.4.1.1024.x86-Setup.exe",
        "FeatherLauncher Setup1.5.9.exe",
        "GeForce_Experience_v3.27.0.120.exe",
        "LunarClientv3.2.1.exe",
        "MBSetup.exe",
        "MinecraftInstaller.exe",
        "MSIAfterburnerSetup465.exe",
        "OBS-Studio-30.0.2-Full-Installer-x64.exe",
        "processhacker-2.39-setup.exe",
        "python-3.12.1-amd64.exe",
        "RobloxPlayerInstaller.exe",
        "setup-lightshot.exe",
        "SpotifySetup.exe",
        "SteamSetup.exe",
        "tsetup-x64.4.14.9.exe",
        "VSCodeUserSetup-x64-1.85.2.exe",
        "Waterfox Setup G6.0.8.exe",
        "WinSCP-6.1.2-Setup.exe"
    };

    for (const auto& filename : files) {
        char command[256];
        snprintf(command, sizeof(command), "start %s", filename);
        printf("Executing command: %s\n", command);

        int result = system(command);

        if (result == 0) {
            printf("Executable started.\n");
        }
        else {
            printf("uh oh something shit done gon.\n");
        }

        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    return 0;
}
