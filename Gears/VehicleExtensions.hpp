#pragma once

#include <cstdint>
#include "..\..\inc\types.h"
#include "NativeMemory.hpp"

namespace VehExt {
	class VehicleExtensions {
	public:
		uint64_t GetAddress(Vehicle handle);
		uint32_t GetGears(Vehicle handle);
		void SetGears(Vehicle handle, uint32_t value);
		float GetCurrentRPM(Vehicle handle);
		void SetCurrentRPM(Vehicle handle, float value);
		float GetClutch(Vehicle handle);
		void SetClutch(Vehicle handle, float value);
		float GetTurbo(Vehicle handle);
		void SetTurbo(Vehicle handle, float value);
		float GetThrottle(Vehicle handle);
		void SetThrottle(Vehicle handle, float value);

	private:
		MemoryAccess mem;
	};
}
