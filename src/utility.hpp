#pragma once

template<typename T, size_t N>
inline constexpr
size_t ArrayLength(const T(&) [N])
{
	return N;
}