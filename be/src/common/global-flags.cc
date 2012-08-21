// (c) 2012 Cloudera, Inc. All rights reserved.
//
// This file contains global flags, ie, flags which don't belong to a particular
// component (and would therefore need to be DEFINE'd in every source file containing
// a main()), or flags that are referenced from multiple places and having them here 
// calms the linker errors that would otherwise ensue.

#include "common/logging.h"

DEFINE_string(classpath, "", "java classpath");
DEFINE_string(ipaddress, "127.0.0.1", "The host ip address on which we're running.");

// This will be defaulted to the host name returned by the OS.
// This name is used in the principal generated for Kerberos authorization.
DEFINE_string(hostname, "", "Host name to use for this daemon");

DEFINE_string(planservice_host, "localhost", "Host on which planservice is running");
DEFINE_int32(planservice_port, 20000, "Port on which planservice is running");
DEFINE_int32(be_port, 22000, "port on which ImpalaInternalService is exported");

// Kerberos is enabled if and only if principal is set.
DEFINE_string(principal, "", "Kerberos principal name");
DEFINE_string(keytab_file, "", "Absolute path to Kerberos key file");
