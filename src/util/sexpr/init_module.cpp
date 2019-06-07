/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/sexpr/format.h"
#include "util/sexpr/sexpr.h"

namespace lean {
void initialize_sexpr_module() {
    initialize_sexpr();
    initialize_format();
}

void finalize_sexpr_module() {
    finalize_format();
    finalize_sexpr();
}
}
