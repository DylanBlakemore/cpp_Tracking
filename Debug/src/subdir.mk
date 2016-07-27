################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Track.cpp \
../src/Vec3d.cpp \
../src/cpp_Tracking.cpp 

OBJS += \
./src/Track.o \
./src/Vec3d.o \
./src/cpp_Tracking.o 

CPP_DEPS += \
./src/Track.d \
./src/Vec3d.d \
./src/cpp_Tracking.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


