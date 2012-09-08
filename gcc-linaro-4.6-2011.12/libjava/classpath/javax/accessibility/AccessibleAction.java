/* AccessibleAction.java -- aids in accessibly performing actions
   Copyright (C) 2000, 2002, 2005  Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */


package javax.accessibility;

/**
 * If an object implements this interface then it must be able to perform one
 * or more actions. Accessibility software can use the implementations of this
 * interface to discover and perform actions on an object.
 *
 * <p>The <code>AccessibleContext.getAccessibleAction()</code> method should
 * return <code>null</code> if an object does not implement this interface.
 *
 * @author Eric Blake (ebb9@email.byu.edu)
 * @see Accessible
 * @see AccessibleContext
 * @see AccessibleContext#getAccessibleAction()
 * @since 1.2
 * @status updated to 1.4
 */
public interface AccessibleAction
{

  /**
   * The name of an action which decrements a value.
   *
   * @since 1.5
   */
  static final String DECREMENT = "decrement";

  /**
   * The name of an action which increments a value.
   *
   * @since 1.5
   */
  static final String INCREMENT = "increment";

  /**
   * The name of an action which toggles the expansion of a tree node.
   *
   * @since 1.5
   */
  static final String TOGGLE_EXPAND = "toggle expand";

  /**
   * The name of an action which causes a component to perform its default
   * action.
   *
   * @since 1.6
   */
  static final String CLICK = "click";

  /**
   * The name of an action which toggles the state of a popup, causing a
   * hidden popup to be displayed and a visible popup to be hidden.
   *
   * @since 1.6
   */
  static final String TOGGLE_POPUP = "toggle popup";

  /**
   * Get the number possible actions for this object, with the zeroth
   * representing the default action.
   *
   * @return the 0-based number of actions
   */
  int getAccessibleActionCount();

  /**
   * Get a description for the specified action. Returns null if out of
   * bounds.
   *
   * @param i the action to describe, 0-based
   * @return description of the action
   */
  String getAccessibleActionDescription(int i);

  /**
   * Perform the specified action. Does nothing if out of bounds.
   *
   * @param i the action to perform, 0-based
   * @return true if the action was performed
   */
  boolean doAccessibleAction(int i);
} // interface AccessibleAction
