# **Combat-Ready NPC AI Sandbox (Unreal Engine 5)**

## **Project Overview**

This project is a focused gameplay AI sandbox built in Unreal Engine 5 using C++. It explores NPC awareness, decision making, and behavior flow in a combat-oriented context. The goal is not to ship a full game, but to design a clear, extensible, and debuggable AI architecture suitable for complex RPG-style encounters.

The project emphasizes system design, behavior clarity, and iteration over visual polish.

---

## **Current Capabilities**

NPCs in the sandbox are currently able to:

- Patrol autonomously using navigable space
- Detect the player via sight
- React to player-generated sound events
- Pursue the player while line of sight is maintained
- Investigate last known locations when contact is lost
- Complete a search behavior and naturally return to patrol
- Immediately interrupt lower-priority behaviors when higher-priority stimuli occur

Behavior transitions are reactive and interruptible rather than time-driven.

---

## **AI Architecture**

### Core Components

- AIEnemyController (C++)  
  Owns perception, blackboard state, and behavior execution

- Behavior Tree  
  Encodes high-level decision flow and priorities

- Blackboard  
  Represents shared AI state including awareness, memory, and intent

- Custom Behavior Tree Tasks and Services (C++)  
  Handle navigation queries, memory updates, and state transitions

Locomotion and animation are provided by Unreal’s Game Animation Sample so development focus remains on AI behavior and logic rather than animation setup.

---

## **Perception and Awareness**

NPCs use Unreal Engine’s AI Perception system with sight and hearing configured in C++.

- Sight detects the player within a defined radius and field of view
- Hearing responds to explicit noise events reported by the player
- Perception updates are filtered so only the player can become a valid target
- Sight and hearing stimuli are handled differently to support investigation behavior

Perception events update Blackboard state but do not directly drive movement.

---

## **Memory and Search Behavior**

NPCs maintain short-term memory of the player using Blackboard state.

Tracked information includes:

- Whether the player is currently visible
- The last known location where the player was seen or heard
- Whether the AI is actively searching

When line of sight is lost or a noise is heard:

- The NPC moves to the last known location
- Selects a nearby reachable point to investigate
- Explicitly completes the search behavior
- Clears search state and returns to patrol

Search completion is behavior-driven rather than timer-based.

---

## **Behavior Tree Structure**

The Behavior Tree is organized into three high-level states:

- Engage  
  Runs when the player is visible and a valid target  
  NPC pursues the player directly

- Search  
  Runs when the player is no longer visible but was recently detected  
  NPC investigates last known information

- Patrol  
  Default behavior when no target or search is active  
  NPC patrols using randomly selected reachable points

State transitions are controlled through Blackboard decorators with observer aborts, allowing immediate reaction to changing conditions.

---

## **Custom C++ AI Logic**

Implemented custom systems include:

- A task for selecting random reachable navigation points
- A task for explicitly ending search behavior
- A Behavior Tree service that maintains consistent memory state and reacts to perception changes

Behavior logic is intentionally kept out of animation, pawn, and low-level movement code, keeping decision ownership centralized and readable.

---

## **Design Goals**

This project demonstrates:

- Clear separation between perception, memory, and behavior
- Declarative behavior control via Blackboard-driven conditions
- Interruptible AI states with well-defined priorities
- A practical gameplay AI architecture suitable for combat-driven games

The system is designed to scale into combat reasoning, threat evaluation, and archetype-based tuning without requiring structural changes.

---

## **Notes**

Visual assets are intentionally minimal. The Unreal Game Animation Sample is used for character locomotion and animation to avoid duplicating solved systems and to focus development effort on AI behavior and architecture.
