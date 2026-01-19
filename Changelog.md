# **Combat-Ready NPC AI Sandbox (Unreal Engine 5.7) Changelog**

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## **v0.0.2**

### Added

- Introduced an explicit combat state system (Patrol, Alerted, Engaged, Searching, Retreating)
- Added a central service responsible for evaluating and updating combat state
- Added a data-driven AI archetype system with designer-tunable parameters
- Implemented three initial archetypes (Berserker, Skirmisher, Coward) with clearly different behavior
- Exposed movement and weapon tuning values for easier iteration and balancing
- Separated AI decision making from execution using Blackboard intent values
- Added a service for selecting high-level movement intent
- Added a service for selecting weapon usage intent
- Improved behavior interruption so higher-priority states can preempt lower-priority actions

### Changed

- Refactored the Behavior Tree to rely on explicit combat states instead of scattered conditional logic
- Moved most decision logic out of tasks and into services to keep the tree readable
- Updated search behavior to complete explicitly rather than timing out
- Cleaned up patrol transitions so AI reliably returns to patrol after searching

### Fixed

- Fixed an issue where AI would exit search early due to perception memory being refreshed
- Fixed patrol behavior not aborting immediately when combat conditions became valid
- Prevented perception updates from overwriting active search state

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
