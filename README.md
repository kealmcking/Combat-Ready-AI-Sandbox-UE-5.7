# Combat-Ready NPC AI Sandbox (Unreal Engine 5)

## Project Overview

This project is a focused AI sandbox built in Unreal Engine 5 using C++. It is designed to explore NPC movement, awareness, and decision flow in a combat-oriented context. The goal is not to ship a full game, but to build a clear and debuggable AI architecture that can be extended with perception, combat reasoning, and designer-tunable behavior.

This repository represents Day 1 of development and establishes the foundational AI structure that future systems build upon.

---

## Current Scope (Day 1)

At this stage, the project implements a minimal but complete AI loop:

* AI characters are controlled via a Behavior Tree and Blackboard
* NPCs patrol the environment when no target is present
* NPCs chase the player when a target is detected
* All behavior is driven through C++ AI controller logic and Behavior Tree tasks
* Navigation is handled through Unreal’s NavMesh system

This establishes the baseline behavior flow before adding perception, memory, or combat logic.

---

## AI Architecture (v1)

### Core Components

* AIEnemyCharacter (ACharacter)
  Represents the NPC entity

* AIEnemyController (AAIController)
  Owns behavior execution and blackboard state

* Behavior Tree
  Handles high-level control flow such as patrol versus chase

* Blackboard
  Stores shared state accessed by tasks and decorators

---

### Blackboard Keys

| Key Name     | Type   | Purpose                             |
| ------------ | ------ | ----------------------------------- |
| TargetActor  | Object | Current target to pursue (player)   |
| MoveLocation | Vector | Navigation goal for patrol movement |

---

## Behavior Tree v1

The initial Behavior Tree is intentionally simple and readable:

* Selector

  * Chase branch
    Runs when TargetActor is set and moves toward the target actor
  * Patrol branch
    Selects a random reachable point on the NavMesh, moves to that location, then waits briefly before selecting a new point

This structure establishes a clean separation between decision flow and action execution.

---

## Custom C++ Task

### BTTask_SetRandomReachablePoint

A custom Behavior Tree task implemented in C++ that performs the following:

* Queries the NavMesh for a random reachable point within a defined radius
* Writes the resulting location to the MoveLocation blackboard key
* Fails gracefully if navigation data is unavailable

This task replaces Blueprint-only patrol logic and serves as a foundation for more advanced spatial reasoning later in the project.

---

## Temporary Targeting Logic

For Day 1 testing purposes, the AI uses a simple distance check to assign the TargetActor blackboard key.

This logic is intentionally temporary and will be replaced by AI Perception using sight and hearing in the next phase.

---

## Design Intent

The focus at this stage is:

* Clean separation of responsibilities
* Readable and maintainable Behavior Trees
* Minimal state coupling between systems
* Early avoidance of overly complex or fragile tree structures

The system is designed to scale into:

* Perception and memory handling
* Combat state modeling
* Distance and health driven decision making
* Designer-tunable AI archetypes
* Debug visualization and tooling

---

## Next Steps

Planned additions in subsequent phases include:

* AI Perception with sight and hearing
* Memory and last known location searching
* Explicit combat state modeling
* Combat decision making based on distance and health
* Debug overlays and visualization tools

---

## Notes

Visual assets are intentionally minimal. The Unreal Game Animation Sample is used for the player character in order to prioritize AI system development over animation work.

---

This project is being developed as a portfolio piece focused on gameplay AI architecture, clarity, and iteration.
