################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/DMA1.c \
../Generated_Code/DMACH1.c \
../Generated_Code/DMACH2.c \
../Generated_Code/PE_LDD.c \
../Generated_Code/SPI1.c \
../Generated_Code/SPI2.c \
../Generated_Code/Vectors.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/DMA1.o \
./Generated_Code/DMACH1.o \
./Generated_Code/DMACH2.o \
./Generated_Code/PE_LDD.o \
./Generated_Code/SPI1.o \
./Generated_Code/SPI2.o \
./Generated_Code/Vectors.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/DMA1.d \
./Generated_Code/DMACH1.d \
./Generated_Code/DMACH2.d \
./Generated_Code/PE_LDD.d \
./Generated_Code/SPI1.d \
./Generated_Code/SPI2.d \
./Generated_Code/Vectors.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale\KDS_3.0.0\eclipse\ProcessorExpert/lib/Kinetis/pdd/inc" -I"C:\Freescale\KDS_3.0.0\eclipse\ProcessorExpert/lib/Kinetis/iofiles" -I"C:/Users/sanani/Documents/GitHub/k60_spi_dma_2/Sources" -I"C:/Users/sanani/Documents/GitHub/k60_spi_dma_2/Generated_Code" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


