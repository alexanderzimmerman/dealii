//----------------------------------------------------------------------
//    $Id$
//    Version: $Name$
//
//    Copyright (C) 2007, 2008, 2010, 2012 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//----------------------------------------------------------------------
//
// Compute support points

#include "../tests.h"
#include "fe_support_points_common.h"


int
main()
{
  initlog(__FILE__);
  deallog.threshold_double(1.e-10);

  CHECK_SYS3(FE_Nedelec<2>(1), 1,
 	     FESystem<2>(FE_DGQ<2>(3),3), 1,
 	     FESystem<2>(FE_Q<2>(2),3,
 			 FE_Nedelec<2>(1),2),2,
 	     2);
}
