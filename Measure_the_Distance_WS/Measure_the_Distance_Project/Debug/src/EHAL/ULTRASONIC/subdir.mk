################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/EHAL/ULTRASONIC/ultrasonic.c 

OBJS += \
./src/EHAL/ULTRASONIC/ultrasonic.o 

C_DEPS += \
./src/EHAL/ULTRASONIC/ultrasonic.d 


# Each subdirectory must supply rules for building sources it contributes
src/EHAL/ULTRASONIC/%.o: ../src/EHAL/ULTRASONIC/%.c src/EHAL/ULTRASONIC/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


