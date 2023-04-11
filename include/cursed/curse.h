#pragma once

#if IF_ELSE_RNG
// make if statements rng-driven
#define if(cond) if((int)(cond) ^ ((random_u16()) < CURSED_RANDOM_AMT))
#endif
