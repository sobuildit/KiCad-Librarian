/*
 *  Librarian for KiCad, a free EDA CAD application.
 *  The dialog for the user-interface settings.
 *
 *  Copyright (C) 2013-2015 CompuPhase
 *
 *  Licensed under the Apache License, Version 2.0 (the "License"); you may not
 *  use this file except in compliance with the License. You may obtain a copy
 *  of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *  License for the specific language governing permissions and limitations
 *  under the License.
 *
 *  $Id: libmngr_dlgoptions.h 5686 2017-05-24 13:56:46Z thiadmer $
 */
#ifndef __libmngr_dlgoptions__
#define __libmngr_dlgoptions__

/**
@file
Subclass of DlgOptions, which is generated by wxFormBuilder.
*/

#include "libmngr_gui_base.h"

//// end generated include

/** Implementing DlgOptions */
class libmngrDlgOptions : public DlgOptions
{
  public:
    /** Constructor */
    explicit libmngrDlgOptions(wxWindow* parent);
  //// end generated class members

  void OnOK(wxCommandEvent& event);
};

#endif // __libmngr_dlgoptions__
