/*
 * This file is part of the SYMPLER package.
 * https://github.com/kauzlari/sympler
 *
 * Copyright 2002-2013, 
 * David Kauzlaric <david.kauzlaric@frias.uni-freiburg.de>,
 * and others authors stated in the AUTHORS file in the top-level 
 * source directory.
 *
 * SYMPLER is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * SYMPLER is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with SYMPLER.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Please cite the research papers on SYMPLER in your own publications. 
 * Check out the PUBLICATIONS file in the top-level source directory.
 *
 * You are very welcome to contribute extensions to the code. Please do 
 * so by making a pull request on https://github.com/kauzlari/sympler
 * 
 */



#ifndef __OUTPUT_H
#define __OUTPUT_H

#include "postprocessor.h"

/*!
 * Base class for all output modules, which means modules that 
 * write to disk, network, slate, ...
 */
class Output: public Postprocessor
{
protected:
  /*!
   * Find a child \a Postprocessor
   */
  virtual Node *instantiateChild(const string &name);
    
public:
  /*!
   * Constructor
   * @param parent Parent node in the \a Postprocessor chain
   * @param simulation Pointer to the main \a Simulation object
   */
  Output(Node *parent, Simulation *simulation);

  /*!
   * Destructor
   */
  virtual ~Output();

  /*!
   * Currently only delegates to \a setup of \a Postprocessor
   */
  virtual void setup();
};

#endif