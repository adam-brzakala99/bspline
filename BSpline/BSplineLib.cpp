// Instantiate the BSpline templates for type 
//
//////////////////////////////////////////////////////////////////////
/*
 * Copyright (c) 1998-2008
 * University Corporation for Atmospheric Research, UCAR
 *
 * Permission to use, copy, modify, distribute and sell this software and
 * its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and that
 * both that copyright notice and this permission notice appear in
 * supporting documentation.  UCAR makes no representations about the
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 * 
 * Note from the author:
 *
 * Where possible, you are encouraged to follow the GNU General Public
 * License, or at least the spirit of the license, for the distribution and
 * licensing of this software and any derived works.  See
 * http://www.gnu.org/copyleft/gpl.html.
 */

#include "BSplineBase.cpp"
#include "BSpline.cpp"
#include "BSplinePlus.cpp"

/// Instantiate BSplineBase for a library
template class  BSplineBase<double>;
template class  BSplineBase<float>;

/// Instantiate BSpline for a library
template class BSpline<double>;
template class BSpline<float>;

/// Instantiate BSplinePlus for a library
template class BSplinePlus<double>;
template class BSplinePlus<float>;

