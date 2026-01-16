# **Combat-Ready NPC AI Sandbox (Unreal Engine 5.7)**

## **Project Overview**

This project is a focused gameplay AI sandbox built in Unreal Engine 5 using C++. Its purpose is to design and validate a clean, extensible, and debuggable NPC AI architecture suitable for combat-driven RPG and action games.

Rather than shipping a complete game, the project exists to explore how perception, memory, decision-making, and behavior execution can be structured in a way that scales to complex encounters while remaining readable and designer-friendly.

---

## **Project Goals**

The primary goal of this project is to build a production-quality AI foundation that supports combat-ready NPCs without relying on hardcoded logic or fragile Behavior Tree structures.

Specifically, the project aims to:

- Separate perception, memory, decision-making, and execution into clearly defined systems
- Drive behavior through declarative Blackboard state rather than imperative logic
- Support immediate interruption and reprioritization of behavior in response to new stimuli
- Keep Behavior Trees readable by pushing “thinking” into C++ services and utilities
- Make AI intent observable and debuggable at runtime

---

## **Design Philosophy**

This sandbox is built around the idea that NPC behavior should be understandable at a glance.

High-level decisions are expressed through Blackboard state and Behavior Tree structure, while low-level logic lives in focused C++ tasks and services. The system favors explicit states, clear ownership of responsibility, and predictable transitions over emergent or opaque behavior.

The architecture is intentionally designed so that new behaviors, combat rules, or AI archetypes can be added without restructuring the core system.

---

## **AI Scope and Intent**

The AI framework is designed to support NPCs that can:

- Perceive the player through sight and hearing
- Maintain short-term memory and reason about last known information
- Transition cleanly between patrol, engagement, investigation, and recovery states
- React immediately to higher-priority stimuli
- Make movement and combat decisions based on context rather than scripted sequences

The sandbox focuses on the *decision layer* of AI rather than animation, weapon mechanics, or presentation.

---

## **Architecture Overview**

The system is built around the following principles:

- An AI controller that owns perception, memory, and decision state
- A Blackboard that represents the AI’s current understanding of the world
- Behavior Trees that express high-level flow and priority
- Custom C++ tasks and services that implement reasoning, navigation queries, and state transitions

Decision intent is centralized and decoupled from low-level movement, animation, and pawn logic.

---

## **Extensibility Goals**

The project is structured to scale naturally into:

- Combat decision-making based on distance, health, and threat
- Archetype-driven behavior tuning through data assets
- Advanced positioning logic such as cover usage and flanking
- Debug visualization and AI introspection tools
- Multi-agent or squad-based reasoning

These extensions are intended to build on the existing architecture without requiring fundamental changes.

---

## **Notes**

Visual assets are intentionally minimal. The Unreal Game Animation Sample is used for locomotion and animation to avoid duplicating solved systems and to keep development effort focused on AI behavior, architecture, and decision-making.
