################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/Users/juliosugaya/Arduino\ 1.6.app/Contents/Java/libraries/LiquidCrystal/src/LiquidCrystal.cpp 

LINK_OBJ += \
./Libraries/LiquidCrystal/src/LiquidCrystal.cpp.o 

CPP_DEPS += \
./Libraries/LiquidCrystal/src/LiquidCrystal.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
Libraries/LiquidCrystal/src/LiquidCrystal.cpp.o: /Users/juliosugaya/Arduino\ 1.6.app/Contents/Java/libraries/LiquidCrystal/src/LiquidCrystal.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_NANO -DARDUINO_ARCH_AVR     -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/cores/arduino" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/variants/eightanaloginputs" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/libraries/LiquidCrystal/src" -I"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/arduino/avr/libraries/SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"   -Wall
	@echo 'Finished building: $<'
	@echo ' '


