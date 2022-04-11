/* { dg-do compile } */
/* { dg-additional-options "-O -w" } */

int foo;
int
nr (int xe, int z)
{
  int oo, wo = 0;

  for (oo = 0; oo < 4; ++oo)
    {
      int qq;

      int old_wo = wo;
      for (qq = 0; qq < 2; ++qq)
        {
          wo = z + qq + old_wo;
          xe += wo;
        }
    }
  foo = wo;
  return xe;
}

/* { dg-final { scan-tree-dump-not "double reduction: wo" "vect" } } */
/* { dg-final { scan-tree-dump-not "OUTER LOOP VECTORIZED" "vect" } } */
