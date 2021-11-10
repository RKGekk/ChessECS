#pragma once

namespace ecs {

	namespace SystemOrder {
		constexpr uint32_t NO_ORDER = 0;
		constexpr uint32_t LOGIC = 1000;
		constexpr uint32_t RENDER = 2000;
		constexpr uint32_t UI = 3000;
		constexpr uint32_t UIMENU = 4000;
	}
}