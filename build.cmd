@call %~dp0\gcc-arm-none-eabi\bin\buildenv.cmd
cd %~dp0
make %1 %2 %3
