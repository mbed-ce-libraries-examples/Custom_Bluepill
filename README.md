<!--
  If you have any question about this then raise an issue at https://github.com/mbed-ce-libraries-examples/LibraryTemplate/issues
  
  Under this block replace the text with a name of new library and some short description.
-->
# Bluepill - Hello world example
This example demonstrate how to run Bluepill as custom target under MbedCE
![stm32f103c8t6_pinout_voltage01](https://github.com/user-attachments/assets/d2a98f4a-a873-4296-9622-f715067ff497)

<!--
  Under this block edit How to start with the library under MbedCE
-->
## How to start
This guide assumes you are familiar with the MbedCE build system, if not, please visit https://github.com/mbed-ce/mbed-os/wiki
1. Open OS Command line and navigate to your workspace, for exampe `C:\MbedCE_projects\`
2. Into Command line type
    - `git clone --recursive https://github.com/mbed-ce-libraries-examples/Custom_Bluepill.git HerePlaceMyProjectName`
    - and for MbedOS update to latest type `cd HerePlaceMyProjectName && git submodule update --remote mbed-os` 
4. On the last line of cmake-variants.yaml file set your [upload method](https://github.com/mbed-ce/mbed-os/wiki/Upload-Methods). Default is NONE = it generates just .bin file. Optimal for external loaders like DFU method and so on (I personaly prefer [STM32CUBE](https://github.com/mbed-ce/mbed-os/wiki/Upload-Methods#stm32cube)). 
5. Build the project

## Notes
1. project is set for Baremetal profile
2. default baud rate for the console is 115200
