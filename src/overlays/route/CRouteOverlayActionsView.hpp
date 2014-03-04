// INDENTING (emacs/vi): -*- mode:c++; tab-width:2; c-basic-offset:2; intent-tabs-mode:nil; -*- ex: set tabstop=2 expandtab:

/*
 * Qt Virtual Chart Table (QVCT)
 * Copyright (C) 2012 Cedric Dufour <http://cedric.dufour.name>
 * Author: Cedric Dufour <http://cedric.dufour.name>
 *
 * The Qt Virtual Chart Table (QVCT) is free software:
 * you can redistribute it and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation, Version 3.
 *
 * The Qt Virtual Chart Table (QVCT) is distributed in the hope
 * that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 */

#ifndef QVCT_CROUTEOVERLAYACTIONSVIEW_HPP
#define QVCT_CROUTEOVERLAYACTIONSVIEW_HPP

// QT
#include <QPushButton>

// QVCT
#include "overlays/COverlayActionsView.hpp"


/// [UI] Route overlay's actions view
/**
 *  This class implements the user-interface that allows to perform additional
 *  actions on route overlay objects.
 *  @author Cedric Dufour <http://cedric.dufour.name>
 */
class CRouteOverlayActionsView: public COverlayActionsView
{
  Q_OBJECT


  //------------------------------------------------------------------------------
  // FIELDS
  //------------------------------------------------------------------------------

private:
  /// [UI:Button] Order invert
  QPushButton* pqPushButtonOrderInvert;
  /// [UI:Button] Order ascending
  QPushButton* pqPushButtonOrderAscending;
  /// [UI:Button] Order descending
  QPushButton* pqPushButtonOrderDescending;
  /// [UI:Button] Delete
  QPushButton* pqPushButtonDelete;


  //------------------------------------------------------------------------------
  // CONSTRUCTORS / DESTRUCTOR
  //------------------------------------------------------------------------------

public:
  CRouteOverlayActionsView();
  virtual ~CRouteOverlayActionsView() {};

private:
  /// Constructs the layout of the user-interface
  void constructLayout();


  //------------------------------------------------------------------------------
  // METHODS
  //------------------------------------------------------------------------------

  // SLOTS
private slots:
  /// [UI:Slot] Slot to invert content order
  void slotOrderInvert();
  /// [UI:Slot] Slot to order content in ascending direction
  void slotOrderAscending();
  /// [UI:Slot] Slot to order content in descending direction
  void slotOrderDescending();
  /// [UI:Slot] Slot to delete overlay's selected content
  void slotDelete();

};

#endif // QVCT_CROUTEOVERLAYACTIONSVIEW_HPP