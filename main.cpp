#include <iostream>
#include <CL/opencl.hpp>

using namespace std;
using namespace cl;

int main() {

    // Get all platforms in your hardware device (My laptop for example)
    std::vector<Platform> platforms;
    Platform::get(&platforms);

    for (auto &platform: platforms) {
        cout << "--------------- Platform  --------------" << endl;
        cout << "\t\t" << "Platform name : " << platform.getInfo<CL_PLATFORM_NAME>() << endl;
        cout << "\t\t" << "Platform version : " << platform.getInfo<CL_PLATFORM_VERSION>() << endl;
        cout << "\t\t" << "Platform vendor : " << platform.getInfo<CL_PLATFORM_VENDOR>() << endl;

        // get All platform devices
        std::vector<Device> devices;
        platform.getDevices(CL_DEVICE_TYPE_ALL, &devices);


        cout << "\t\t--------------Devices------------" << endl;
        if (devices.empty()) {
            cout << "No device found !" << endl;
        } else {
            for (const auto &item: devices) {

                string type = "Unknown";
                cl_device_type deviceType = item.getInfo<CL_DEVICE_TYPE>();

                if (deviceType == CL_DEVICE_TYPE_GPU) {
                    type = "GPU";
                } else if (deviceType == CL_DEVICE_TYPE_CPU) {
                    type = "CPU";
                } else if (deviceType == CL_DEVICE_TYPE_ACCELERATOR) {
                    type = "ACCELERATOR";
                }
                cout << "\t\tDevice name : " << item.getInfo<CL_DEVICE_NAME>() << endl;
                cout << "\t\tDevice type : " << type << "(" << item.getInfo<CL_DEVICE_TYPE>() << ") " << endl;
                cout << "\t\tDevice vendor : " << item.getInfo<CL_DEVICE_VENDOR>() << endl;
                cout << "\t\tDevice version : " << item.getInfo<CL_DEVICE_VERSION>() << endl;
            }
        }
    }

    return 0;
}
