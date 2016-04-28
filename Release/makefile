################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -f

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include arduino/core/subdir.mk
-include Libraries/SoftwareSerial/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
arduino.ar \

ELF += \
BOTLib.elf \

EEP += \
BOTLib.eep \

FLASH_IMAGE += \
BOTLib.hex \


# All Target
all: BOTLib

# Tool invocations
BOTLib: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-size" -A "/Users/juliosugaya/_projects_ccp/BOTLib/Release/BOTLib.elf"
	@echo 'Finished building target: $@'
	@echo ' '

arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-ar" rcs  "/Users/juliosugaya/_projects_ccp/BOTLib/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

BOTLib.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-gcc" -Os -Wl,--gc-sections -mmcu=atmega328p  -o "/Users/juliosugaya/_projects_ccp/BOTLib/Release/BOTLib.elf"   $(LINK_OBJ) $(AR)  "/Users/juliosugaya/_projects_ccp/BOTLib/Release/arduino.ar" "-L/Users/juliosugaya/_projects_ccp/BOTLib/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

BOTLib.eep: $(ELF)
	@echo 'Create eeprom image'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0  "/Users/juliosugaya/_projects_ccp/BOTLib/Release/BOTLib.elf" "/Users/juliosugaya/_projects_ccp/BOTLib/Release/BOTLib.eep"
	@echo 'Finished building: $@'
	@echo ' '

BOTLib.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"/Users/juliosugaya/Arduino 1.6.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy" -O ihex -R .eeprom  "/Users/juliosugaya/_projects_ccp/BOTLib/Release/BOTLib.elf" "/Users/juliosugaya/_projects_ccp/BOTLib/Release/BOTLib.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(C_DEPS)$(AR)$(EEP)$(FLASH_IMAGE)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(ASM_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(ELF)$(CPP_DEPS) BOTLib
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
