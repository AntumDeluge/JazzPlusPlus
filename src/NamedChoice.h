//*****************************************************************************
// The JAZZ++ Midi Sequencer
//
// Copyright (C) 1994-2000 Andreas Voss and Per Sigmond, all rights reserved.
// Modifications Copyright (C) 2004 Patrick Earl
// Modifications Copyright (C) 2008-2013 Peter J. Stieber
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

#pragma once

#include <wx/object.h>

#include <vector>
#include <string>

class wxStringListValidator;

//*****************************************************************************
// Description:
//   This class presents a dialog with the values to choose from.
//*****************************************************************************
class JZNamedChoice : public wxObject
{
  public:

    JZNamedChoice(
      const char* pTitle,
      const std::vector<std::pair<wxString, int> >& Pairs,
      int* pResult);

    virtual ~JZNamedChoice();

//    wxFormItem *mkFormItem(int w = 100, int h = 100);

    wxStringListValidator* GetStringListValidator();

    void GetValue();

    void SetValue();

  private:

//    char* mpTitle;

    const std::vector<std::pair<wxString, int> >& mPairs;

    std::string mSelection;

    int* mpResult;
};