/*
 * mach-support-unknown.c: mach support for cross compilers (IOW, none)
 *
 * Authors:
 *   Rodrigo Kumpera (kumpera@gmail.com)
 *
 * (C) 2012 Xamarin, Inc.
 */

#include <config.h>

#if defined(__MACH__)
#include <stdint.h>
#include <glib.h>
#include <pthread.h>
#include "utils/mono-sigcontext.h"
#include "mach-support.h"

void *
mono_mach_arch_get_ip (thread_state_t state)
{
	g_assert_not_reached ();
}

void *
mono_mach_arch_get_sp (thread_state_t state)
{
	g_assert_not_reached ();
}

int
mono_mach_arch_get_mcontext_size ()
{
	g_assert_not_reached ();
}

void
mono_mach_arch_thread_states_to_mcontext (thread_state_t state, thread_state_t fpstate, void *context)
{
	g_assert_not_reached ();
}

void
mono_mach_arch_mcontext_to_thread_states (void *context, thread_state_t state, thread_state_t fpstate)
{
	g_assert_not_reached ();
}

void
mono_mach_arch_thread_states_to_mono_context (thread_state_t state, thread_state_t fpstate, MonoContext *context)
{
	g_assert_not_reached ();
}

int
mono_mach_arch_get_thread_state_size ()
{
	g_assert_not_reached ();
}

int
mono_mach_arch_get_thread_fpstate_size ()
{
	g_assert_not_reached ();
}

kern_return_t
mono_mach_arch_get_thread_states (thread_port_t thread, thread_state_t state, mach_msg_type_number_t *count, thread_state_t fpstate, mach_msg_type_number_t *fpcount)
{
	g_assert_not_reached ();
}

kern_return_t
mono_mach_arch_set_thread_states (thread_port_t thread, thread_state_t state, mach_msg_type_number_t count, thread_state_t fpstate, mach_msg_type_number_t fpcount)
{
	g_assert_not_reached ();	
}

void *
mono_mach_arch_get_tls_value_from_thread (pthread_t thread, guint32 key)
{
	g_assert_not_reached ();
}

void
mono_mach_init (pthread_key_t key)
{
}

#endif
