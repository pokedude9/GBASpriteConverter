//////////////////////////////////////////////////////////////////////////////////
//
//                         ___  ____   ___ 
//                        / __)/ ___) / __)
//                       ( (_ \\___ \( (__ 
//                        \___/(____/ \___)
//
//
// GBASpriteConverter: Adjusts graphics to be compatible with the GBA.
// Copyright (C) 2016 Pokedude
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 3
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
//////////////////////////////////////////////////////////////////////////////////


#ifndef __GSC_MAINWINDOW_HPP__
#define __GSC_MAINWINDOW_HPP__


///////////////////////////////////////////////////////////
// Include files
//
///////////////////////////////////////////////////////////
#include <QMainWindow>


namespace Ui
{
    class MainWindow;
}


///////////////////////////////////////////////////////////
/// \file    MainWindow.hpp
/// \author  Pokedude
/// \class   MainWindow
/// \date    August 26th, 2016
/// \brief   Holds components for the main GSC window.
///
///////////////////////////////////////////////////////////
class MainWindow : public QMainWindow
{
Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    
};

#endif // __GSC_MAINWINDOW_HPP__
