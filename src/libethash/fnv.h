/*
  This file is part of cpp-ethereum.

  cpp-ethereum is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  cpp-ethereum is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with cpp-ethereum.  If not, see <http://www.gnu.org/licenses/>.
*/
/** @file fnv.h
* @author Matthew Wampler-Doty <negacthulhu@gmail.com>
* @date 2015
*/

#pragma once
#include <stdint.h>
#include "compiler.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define FNV_PRIME_0 0x01000193
#define FNV_PRIME_A 0x10001a7
#define FNV_PRIME_B 0x10001ab
#define FNV_PRIME_C 0x10001cf
#define FNV_PRIME_D 0x10001e3
#define FNV_PRIME_E 0x10001f9

  /* The FNV-1 spec multiplies the prime with the input one byte (octet) in turn.
   We instead multiply it with the full 32-bit input.
   This gives a different result compared to a canonical FNV-1 implementation.
*/
  static inline uint32_t fnv_hash_0(uint32_t const x, uint32_t const y)
  {
    return x * FNV_PRIME_0 ^ y;
  }

  static inline uint32_t fnv_hash_a(uint32_t const x, uint32_t const y)
  {
    return x * FNV_PRIME_A ^ y;
  }

  static inline uint32_t fnv_hash_b(uint32_t const x, uint32_t const y)
  {
    return x * FNV_PRIME_B ^ y;
  }

  static inline uint32_t fnv_hash_c(uint32_t const x, uint32_t const y)
  {
    return x * FNV_PRIME_C ^ y;
  }

  static inline uint32_t fnv_hash_d(uint32_t const x, uint32_t const y)
  {
    return x * FNV_PRIME_D ^ y;
  }

  static inline uint32_t fnv_hash_E(uint32_t const x, uint32_t const y)
  {
    return x * FNV_PRIME_E ^ y;
  }

#ifdef __cplusplus
}
#endif
