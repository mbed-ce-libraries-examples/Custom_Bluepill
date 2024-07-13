<!--
  If you have any question about this then raise an issue at https://github.com/mbed-ce-libraries-examples/LibraryTemplate/issues
  
  Under this block replace the text with a name of new library and some short description.
-->
# Bluepill - Hello world example
This example demonstrate how to run Bluepill as custom target under MbedCE

<!--
  Under this block edit How to start with the library under MbedCE
-->
## How to start
This guide assumes you are familiar with the MbedCE build system, if not, please visit https://github.com/mbed-ce/mbed-os/wiki
1. Open OS Command line and navigate to your workspace, for exampe `C:\MbedCE_projects\`
2. Into Command line type `git clone --recursive https://github.com/mbed-ce-libraries-examples/Custom_Bluepill.git HerePlaceMyProjectName`.
3. On the last line of cmake-variants.yaml file set your [upload method](https://github.com/mbed-ce/mbed-os/wiki/Upload-Methods). Default is NONE = it generates just .bin file and you have to continue manually (I personaly prefer [STM32CUBE](https://github.com/mbed-ce/mbed-os/wiki/Upload-Methods#stm32cube)). 
4. Build the project

## Notes
1. project is set for Baremetal profile
2. default baud rate for the console is 115200
