# **Combat-Ready NPC AI Sandbox (Unreal Engine 5.7) Changelog**

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## **v0.0.1**

### Added

- Initial AI sandbox project structure using Unreal Engine 5.7 and C++
- AIEnemyController responsible for perception, blakckboard ownership and behavior execution
- Behavior Tree and Blackboard-driven AI architecture
- Autonomous patrol behavior using random reachable navigation points
- Custom Behavior Tree task for selecting random reachable points on the NavMesh
- AI Perception system configured in C++ with sight and hearing
- Player-only perception filtering for valid targets
- Blackboard-driven awareness state including target tracking and visibility
- Memory system tracking last known player location and last sensed time
- Investigation behavior when line of sight is lost or sound is detected
- Explicit search completion logic that clears search state and returns AI to patrol
- Reactive behavior transistions using Blackboard decorators with observer aborts
- Custom Behavior Tree services for maintaining perception-driven memory state
- Clean separation between perception, memory, and behavior execution logic
- Integration of Unreal's Game Animation Sample for locomotion and animation
