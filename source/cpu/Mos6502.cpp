//===-- source/cpu/Mos6502.cpp - Mos6502 Cpu Class Impl ---------*- C++ -*-===//
//
//                           The OpenNES Project
//
// This file is distributed under GPL v2. See LICENSE.md for details.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains the implementation of the public interface for the
/// Mos6502 class.
///
//===----------------------------------------------------------------------===//
#include "memory/Reference.h"
#include "cpu/CpuException.h"
#include "cpu/Mos6502.h"
#include "cpu/Mos6502Instruction.h"

using namespace Cpu;

// CpuBase class methods
void Mos6502::init() {
}

void Mos6502::run() {
}

void Mos6502::reset() {
}

void Mos6502::trace() {
}

void Mos6502::shutdown() {
}

// Run-time Emulation functions
byte Mos6502::fetchOpcode() {
  // TODO: implement
  return 0;
}

Mos6502Instruction Mos6502::decodeOpcode(byte opcode) {
   // TODO: implement
   Mos6502Instruction inst;
   inst.opcode = opcode;
   return inst;
}

void Mos6502::executeOpcode(Mos6502Instruction inst) {
   // TODO: implement
   byte opcode = inst.opcode;
   printf("%hhu\n",opcode);
   return;
}

// Cpu state inspection methods.
int64 Mos6502::getCycleCount() const {
  return cycleCount;
}

addr Mos6502::getRegPC() const {
  return reg.pc.val;
}

byte Mos6502::getRegAC() const {
  return reg.ac;
}

byte Mos6502::getRegX() const {
  return reg.x;
}

byte Mos6502::getRegY() const {
  return reg.y;
}

byte Mos6502::getRegSR() const {
  return reg.sr;
}

byte Mos6502::getRegSP() const {
  return reg.sp;
}
