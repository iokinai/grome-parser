#include "exceptions/not_implemented.hxx"

using grome::exceptions::not_implemented;

#define NOT_IMPLEMENTED(reason) throw not_implemented(reason)