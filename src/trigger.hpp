//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the BSD License.
*/

#pragma once

//! \class Trigger Enable and disable the Pin's InsertCalls.
class Trigger {
protected:
	bool state;

public:
	//! Constructor.
	Trigger();

	//! Switchs the trigger.
	void toggle();

	//! Returns true if the switch is ON, false otherwise.
	bool getState();

	//! Sets the state to true
	void enable(void);

	//! Sets the state to false
	void disable(void);

	//! Sets the state to flag
	void update(bool flag);


};