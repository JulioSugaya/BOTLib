################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BOTLib.cpp \
../BlueTooth.cpp \
../Button.cpp \
../Debug.cpp \
../LED.cpp \
../Motor.cpp \
../SensorSR04.cpp 

LINK_OBJ += \
./BOTLib.cpp.o \
./BlueTooth.cpp.o \
./Button.cpp.o \
./Debug.cpp.o \
./LED.cpp.o \
./Motor.cpp.o \
./SensorSR04.cpp.o 

CPP_DEPS += \
./BOTLib.cpp.d \
./BlueTooth.cpp.d \
./Button.cpp.d \
./Debug.cpp.d \
./LED.cpp.d \
./Motor.cpp.d \
./SensorSR04.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
BOTLib.cpp.o: ../BOTLib.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

BlueTooth.cpp.o: ../BlueTooth.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

Button.cpp.o: ../Button.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

Debug.cpp.o: ../Debug.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

LED.cpp.o: ../LED.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

Motor.cpp.o: ../Motor.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '

SensorSR04.cpp.o: ../SensorSR04.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '


