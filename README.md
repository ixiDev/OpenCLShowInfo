# OpenCL Info Printer

A simple OpenCL/C++ programme to show all Platforms and devices available in your Laptop


#### Ho to Use
 clone this project or open it using **CLion IDEA**
 
#### Or
 download this project and run the following commands in your terminal :

- `cd 'to the project dir'`
- `mkdir build`
- `cd build`
- `cmake ..`
- `./OpenCLShowInfo`

#### Test and Output

```text
--------------- Platform  --------------
		Platform name : Intel(R) OpenCL
		Platform version : OpenCL 1.2 
		Platform vendor : Intel(R) Corporation
		--------------Devices------------
		Device name :        Intel(R) Core(TM) i5-3437U CPU @ 1.90GHz
		Device type : CPU(2) 
		Device vendor : Intel(R) Corporation
		Device version : OpenCL 1.2 (Build 475)
--------------- Platform  --------------
		Platform name : Intel Gen OCL Driver
		Platform version : OpenCL 2.0 beignet 1.3
		Platform vendor : Intel
		--------------Devices------------
		Device name : Intel(R) HD Graphics IvyBridge M GT2
		Device type : GPU(4) 
		Device vendor : Intel
		Device version : OpenCL 1.2 beignet 1.3
--------------- Platform  --------------
		Platform name : Clover
		Platform version : OpenCL 1.1 Mesa 21.0.3
		Platform vendor : Mesa
		--------------Devices------------
No device found !

```