#pragma once
/**
	@file
	@brief select8
	@author MITSUNARI Shigeo(@herumi)
	@license modified new BSD license
	http://opensource.org/licenses/BSD-3-Clause
*/
#include <assert.h>
#include <cybozu/inttype.hpp>

namespace cybozu { namespace select8_util {

uint8_t select8(uint64_t v, size_t x)
{
	assert(v < 256);
	assert(x < 8);
	static const uint8_t tbl[256][8] = {
{0, 64, 64, 64, 64, 64, 64, 64, },
{64, 0, 64, 64, 64, 64, 64, 64, },
{0, 1, 64, 64, 64, 64, 64, 64, },
{64, 0, 1, 64, 64, 64, 64, 64, },
{0, 2, 64, 64, 64, 64, 64, 64, },
{64, 0, 2, 64, 64, 64, 64, 64, },
{0, 1, 2, 64, 64, 64, 64, 64, },
{64, 0, 1, 2, 64, 64, 64, 64, },
{0, 3, 64, 64, 64, 64, 64, 64, },
{64, 0, 3, 64, 64, 64, 64, 64, },
{0, 1, 3, 64, 64, 64, 64, 64, },
{64, 0, 1, 3, 64, 64, 64, 64, },
{0, 2, 3, 64, 64, 64, 64, 64, },
{64, 0, 2, 3, 64, 64, 64, 64, },
{0, 1, 2, 3, 64, 64, 64, 64, },
{64, 0, 1, 2, 3, 64, 64, 64, },
{0, 4, 64, 64, 64, 64, 64, 64, },
{64, 0, 4, 64, 64, 64, 64, 64, },
{0, 1, 4, 64, 64, 64, 64, 64, },
{64, 0, 1, 4, 64, 64, 64, 64, },
{0, 2, 4, 64, 64, 64, 64, 64, },
{64, 0, 2, 4, 64, 64, 64, 64, },
{0, 1, 2, 4, 64, 64, 64, 64, },
{64, 0, 1, 2, 4, 64, 64, 64, },
{0, 3, 4, 64, 64, 64, 64, 64, },
{64, 0, 3, 4, 64, 64, 64, 64, },
{0, 1, 3, 4, 64, 64, 64, 64, },
{64, 0, 1, 3, 4, 64, 64, 64, },
{0, 2, 3, 4, 64, 64, 64, 64, },
{64, 0, 2, 3, 4, 64, 64, 64, },
{0, 1, 2, 3, 4, 64, 64, 64, },
{64, 0, 1, 2, 3, 4, 64, 64, },
{0, 5, 64, 64, 64, 64, 64, 64, },
{64, 0, 5, 64, 64, 64, 64, 64, },
{0, 1, 5, 64, 64, 64, 64, 64, },
{64, 0, 1, 5, 64, 64, 64, 64, },
{0, 2, 5, 64, 64, 64, 64, 64, },
{64, 0, 2, 5, 64, 64, 64, 64, },
{0, 1, 2, 5, 64, 64, 64, 64, },
{64, 0, 1, 2, 5, 64, 64, 64, },
{0, 3, 5, 64, 64, 64, 64, 64, },
{64, 0, 3, 5, 64, 64, 64, 64, },
{0, 1, 3, 5, 64, 64, 64, 64, },
{64, 0, 1, 3, 5, 64, 64, 64, },
{0, 2, 3, 5, 64, 64, 64, 64, },
{64, 0, 2, 3, 5, 64, 64, 64, },
{0, 1, 2, 3, 5, 64, 64, 64, },
{64, 0, 1, 2, 3, 5, 64, 64, },
{0, 4, 5, 64, 64, 64, 64, 64, },
{64, 0, 4, 5, 64, 64, 64, 64, },
{0, 1, 4, 5, 64, 64, 64, 64, },
{64, 0, 1, 4, 5, 64, 64, 64, },
{0, 2, 4, 5, 64, 64, 64, 64, },
{64, 0, 2, 4, 5, 64, 64, 64, },
{0, 1, 2, 4, 5, 64, 64, 64, },
{64, 0, 1, 2, 4, 5, 64, 64, },
{0, 3, 4, 5, 64, 64, 64, 64, },
{64, 0, 3, 4, 5, 64, 64, 64, },
{0, 1, 3, 4, 5, 64, 64, 64, },
{64, 0, 1, 3, 4, 5, 64, 64, },
{0, 2, 3, 4, 5, 64, 64, 64, },
{64, 0, 2, 3, 4, 5, 64, 64, },
{0, 1, 2, 3, 4, 5, 64, 64, },
{64, 0, 1, 2, 3, 4, 5, 64, },
{0, 6, 64, 64, 64, 64, 64, 64, },
{64, 0, 6, 64, 64, 64, 64, 64, },
{0, 1, 6, 64, 64, 64, 64, 64, },
{64, 0, 1, 6, 64, 64, 64, 64, },
{0, 2, 6, 64, 64, 64, 64, 64, },
{64, 0, 2, 6, 64, 64, 64, 64, },
{0, 1, 2, 6, 64, 64, 64, 64, },
{64, 0, 1, 2, 6, 64, 64, 64, },
{0, 3, 6, 64, 64, 64, 64, 64, },
{64, 0, 3, 6, 64, 64, 64, 64, },
{0, 1, 3, 6, 64, 64, 64, 64, },
{64, 0, 1, 3, 6, 64, 64, 64, },
{0, 2, 3, 6, 64, 64, 64, 64, },
{64, 0, 2, 3, 6, 64, 64, 64, },
{0, 1, 2, 3, 6, 64, 64, 64, },
{64, 0, 1, 2, 3, 6, 64, 64, },
{0, 4, 6, 64, 64, 64, 64, 64, },
{64, 0, 4, 6, 64, 64, 64, 64, },
{0, 1, 4, 6, 64, 64, 64, 64, },
{64, 0, 1, 4, 6, 64, 64, 64, },
{0, 2, 4, 6, 64, 64, 64, 64, },
{64, 0, 2, 4, 6, 64, 64, 64, },
{0, 1, 2, 4, 6, 64, 64, 64, },
{64, 0, 1, 2, 4, 6, 64, 64, },
{0, 3, 4, 6, 64, 64, 64, 64, },
{64, 0, 3, 4, 6, 64, 64, 64, },
{0, 1, 3, 4, 6, 64, 64, 64, },
{64, 0, 1, 3, 4, 6, 64, 64, },
{0, 2, 3, 4, 6, 64, 64, 64, },
{64, 0, 2, 3, 4, 6, 64, 64, },
{0, 1, 2, 3, 4, 6, 64, 64, },
{64, 0, 1, 2, 3, 4, 6, 64, },
{0, 5, 6, 64, 64, 64, 64, 64, },
{64, 0, 5, 6, 64, 64, 64, 64, },
{0, 1, 5, 6, 64, 64, 64, 64, },
{64, 0, 1, 5, 6, 64, 64, 64, },
{0, 2, 5, 6, 64, 64, 64, 64, },
{64, 0, 2, 5, 6, 64, 64, 64, },
{0, 1, 2, 5, 6, 64, 64, 64, },
{64, 0, 1, 2, 5, 6, 64, 64, },
{0, 3, 5, 6, 64, 64, 64, 64, },
{64, 0, 3, 5, 6, 64, 64, 64, },
{0, 1, 3, 5, 6, 64, 64, 64, },
{64, 0, 1, 3, 5, 6, 64, 64, },
{0, 2, 3, 5, 6, 64, 64, 64, },
{64, 0, 2, 3, 5, 6, 64, 64, },
{0, 1, 2, 3, 5, 6, 64, 64, },
{64, 0, 1, 2, 3, 5, 6, 64, },
{0, 4, 5, 6, 64, 64, 64, 64, },
{64, 0, 4, 5, 6, 64, 64, 64, },
{0, 1, 4, 5, 6, 64, 64, 64, },
{64, 0, 1, 4, 5, 6, 64, 64, },
{0, 2, 4, 5, 6, 64, 64, 64, },
{64, 0, 2, 4, 5, 6, 64, 64, },
{0, 1, 2, 4, 5, 6, 64, 64, },
{64, 0, 1, 2, 4, 5, 6, 64, },
{0, 3, 4, 5, 6, 64, 64, 64, },
{64, 0, 3, 4, 5, 6, 64, 64, },
{0, 1, 3, 4, 5, 6, 64, 64, },
{64, 0, 1, 3, 4, 5, 6, 64, },
{0, 2, 3, 4, 5, 6, 64, 64, },
{64, 0, 2, 3, 4, 5, 6, 64, },
{0, 1, 2, 3, 4, 5, 6, 64, },
{64, 0, 1, 2, 3, 4, 5, 6, },
{0, 7, 64, 64, 64, 64, 64, 64, },
{64, 0, 7, 64, 64, 64, 64, 64, },
{0, 1, 7, 64, 64, 64, 64, 64, },
{64, 0, 1, 7, 64, 64, 64, 64, },
{0, 2, 7, 64, 64, 64, 64, 64, },
{64, 0, 2, 7, 64, 64, 64, 64, },
{0, 1, 2, 7, 64, 64, 64, 64, },
{64, 0, 1, 2, 7, 64, 64, 64, },
{0, 3, 7, 64, 64, 64, 64, 64, },
{64, 0, 3, 7, 64, 64, 64, 64, },
{0, 1, 3, 7, 64, 64, 64, 64, },
{64, 0, 1, 3, 7, 64, 64, 64, },
{0, 2, 3, 7, 64, 64, 64, 64, },
{64, 0, 2, 3, 7, 64, 64, 64, },
{0, 1, 2, 3, 7, 64, 64, 64, },
{64, 0, 1, 2, 3, 7, 64, 64, },
{0, 4, 7, 64, 64, 64, 64, 64, },
{64, 0, 4, 7, 64, 64, 64, 64, },
{0, 1, 4, 7, 64, 64, 64, 64, },
{64, 0, 1, 4, 7, 64, 64, 64, },
{0, 2, 4, 7, 64, 64, 64, 64, },
{64, 0, 2, 4, 7, 64, 64, 64, },
{0, 1, 2, 4, 7, 64, 64, 64, },
{64, 0, 1, 2, 4, 7, 64, 64, },
{0, 3, 4, 7, 64, 64, 64, 64, },
{64, 0, 3, 4, 7, 64, 64, 64, },
{0, 1, 3, 4, 7, 64, 64, 64, },
{64, 0, 1, 3, 4, 7, 64, 64, },
{0, 2, 3, 4, 7, 64, 64, 64, },
{64, 0, 2, 3, 4, 7, 64, 64, },
{0, 1, 2, 3, 4, 7, 64, 64, },
{64, 0, 1, 2, 3, 4, 7, 64, },
{0, 5, 7, 64, 64, 64, 64, 64, },
{64, 0, 5, 7, 64, 64, 64, 64, },
{0, 1, 5, 7, 64, 64, 64, 64, },
{64, 0, 1, 5, 7, 64, 64, 64, },
{0, 2, 5, 7, 64, 64, 64, 64, },
{64, 0, 2, 5, 7, 64, 64, 64, },
{0, 1, 2, 5, 7, 64, 64, 64, },
{64, 0, 1, 2, 5, 7, 64, 64, },
{0, 3, 5, 7, 64, 64, 64, 64, },
{64, 0, 3, 5, 7, 64, 64, 64, },
{0, 1, 3, 5, 7, 64, 64, 64, },
{64, 0, 1, 3, 5, 7, 64, 64, },
{0, 2, 3, 5, 7, 64, 64, 64, },
{64, 0, 2, 3, 5, 7, 64, 64, },
{0, 1, 2, 3, 5, 7, 64, 64, },
{64, 0, 1, 2, 3, 5, 7, 64, },
{0, 4, 5, 7, 64, 64, 64, 64, },
{64, 0, 4, 5, 7, 64, 64, 64, },
{0, 1, 4, 5, 7, 64, 64, 64, },
{64, 0, 1, 4, 5, 7, 64, 64, },
{0, 2, 4, 5, 7, 64, 64, 64, },
{64, 0, 2, 4, 5, 7, 64, 64, },
{0, 1, 2, 4, 5, 7, 64, 64, },
{64, 0, 1, 2, 4, 5, 7, 64, },
{0, 3, 4, 5, 7, 64, 64, 64, },
{64, 0, 3, 4, 5, 7, 64, 64, },
{0, 1, 3, 4, 5, 7, 64, 64, },
{64, 0, 1, 3, 4, 5, 7, 64, },
{0, 2, 3, 4, 5, 7, 64, 64, },
{64, 0, 2, 3, 4, 5, 7, 64, },
{0, 1, 2, 3, 4, 5, 7, 64, },
{64, 0, 1, 2, 3, 4, 5, 7, },
{0, 6, 7, 64, 64, 64, 64, 64, },
{64, 0, 6, 7, 64, 64, 64, 64, },
{0, 1, 6, 7, 64, 64, 64, 64, },
{64, 0, 1, 6, 7, 64, 64, 64, },
{0, 2, 6, 7, 64, 64, 64, 64, },
{64, 0, 2, 6, 7, 64, 64, 64, },
{0, 1, 2, 6, 7, 64, 64, 64, },
{64, 0, 1, 2, 6, 7, 64, 64, },
{0, 3, 6, 7, 64, 64, 64, 64, },
{64, 0, 3, 6, 7, 64, 64, 64, },
{0, 1, 3, 6, 7, 64, 64, 64, },
{64, 0, 1, 3, 6, 7, 64, 64, },
{0, 2, 3, 6, 7, 64, 64, 64, },
{64, 0, 2, 3, 6, 7, 64, 64, },
{0, 1, 2, 3, 6, 7, 64, 64, },
{64, 0, 1, 2, 3, 6, 7, 64, },
{0, 4, 6, 7, 64, 64, 64, 64, },
{64, 0, 4, 6, 7, 64, 64, 64, },
{0, 1, 4, 6, 7, 64, 64, 64, },
{64, 0, 1, 4, 6, 7, 64, 64, },
{0, 2, 4, 6, 7, 64, 64, 64, },
{64, 0, 2, 4, 6, 7, 64, 64, },
{0, 1, 2, 4, 6, 7, 64, 64, },
{64, 0, 1, 2, 4, 6, 7, 64, },
{0, 3, 4, 6, 7, 64, 64, 64, },
{64, 0, 3, 4, 6, 7, 64, 64, },
{0, 1, 3, 4, 6, 7, 64, 64, },
{64, 0, 1, 3, 4, 6, 7, 64, },
{0, 2, 3, 4, 6, 7, 64, 64, },
{64, 0, 2, 3, 4, 6, 7, 64, },
{0, 1, 2, 3, 4, 6, 7, 64, },
{64, 0, 1, 2, 3, 4, 6, 7, },
{0, 5, 6, 7, 64, 64, 64, 64, },
{64, 0, 5, 6, 7, 64, 64, 64, },
{0, 1, 5, 6, 7, 64, 64, 64, },
{64, 0, 1, 5, 6, 7, 64, 64, },
{0, 2, 5, 6, 7, 64, 64, 64, },
{64, 0, 2, 5, 6, 7, 64, 64, },
{0, 1, 2, 5, 6, 7, 64, 64, },
{64, 0, 1, 2, 5, 6, 7, 64, },
{0, 3, 5, 6, 7, 64, 64, 64, },
{64, 0, 3, 5, 6, 7, 64, 64, },
{0, 1, 3, 5, 6, 7, 64, 64, },
{64, 0, 1, 3, 5, 6, 7, 64, },
{0, 2, 3, 5, 6, 7, 64, 64, },
{64, 0, 2, 3, 5, 6, 7, 64, },
{0, 1, 2, 3, 5, 6, 7, 64, },
{64, 0, 1, 2, 3, 5, 6, 7, },
{0, 4, 5, 6, 7, 64, 64, 64, },
{64, 0, 4, 5, 6, 7, 64, 64, },
{0, 1, 4, 5, 6, 7, 64, 64, },
{64, 0, 1, 4, 5, 6, 7, 64, },
{0, 2, 4, 5, 6, 7, 64, 64, },
{64, 0, 2, 4, 5, 6, 7, 64, },
{0, 1, 2, 4, 5, 6, 7, 64, },
{64, 0, 1, 2, 4, 5, 6, 7, },
{0, 3, 4, 5, 6, 7, 64, 64, },
{64, 0, 3, 4, 5, 6, 7, 64, },
{0, 1, 3, 4, 5, 6, 7, 64, },
{64, 0, 1, 3, 4, 5, 6, 7, },
{0, 2, 3, 4, 5, 6, 7, 64, },
{64, 0, 2, 3, 4, 5, 6, 7, },
{0, 1, 2, 3, 4, 5, 6, 7, },
{64, 0, 1, 2, 3, 4, 5, 6, },
};
	return tbl[v][x];
}

} } // cybozu::select8_util
