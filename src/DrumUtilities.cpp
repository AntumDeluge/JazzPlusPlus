//*****************************************************************************
// The JAZZ++ Midi Sequencer
//
// Copyright (C) 2013 Peter J. Stieber, all rights reserved.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//*****************************************************************************

#include "DrumUtilities.h"

#include "DrumEnums.h"

#include <cassert>

//*****************************************************************************
//*****************************************************************************
int drumParam2Index(int par)
{
  switch (par)
  {
    case drumPitch:
      return(drumPitchIndex);
    case drumTva:
      return(drumTvaIndex);
    case drumPan:
      return(drumPanIndex);
    case drumReverb:
      return(drumReverbIndex);
    case drumChorus:
      return(drumChorusIndex);
    default:
      assert(0);
  }
  return 0;
}

//*****************************************************************************
//*****************************************************************************
int drumIndex2Param(int index)
{
  switch (index)
  {
    case drumPitchIndex:
      return drumPitch;
    case drumTvaIndex:
      return drumTva;
    case drumPanIndex:
      return drumPan;
    case drumReverbIndex:
      return drumReverb;
    case drumChorusIndex:
      return drumChorus;
    default:
      assert(0);
  }
  return 0;
}
