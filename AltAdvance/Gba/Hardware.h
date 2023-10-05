#pragma once
#include "Arm7/Arm7.h"

namespace Gba
{
	using Arm7 = Arm7_detail::Arm7;

	class Hardware
	{
	public:
		Arm7& GetArm7() { return m_arm7; }

	private:
		Arm7 m_arm7{};
	};
}
