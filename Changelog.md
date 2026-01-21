# **Combat-Ready NPC AI Sandbox (Unreal Engine 5.7) Changelog**

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## **v0.0.3**

### Added

- Added intent-driven combat movement using explicit Blackboard move actions
- Added custom Behavior Tree tasks for combat positioning (Close Distance, Backpedal)
- Added preferred-distance based engagement positioning instead of direct MoveTo-player
- Added `DesiredMoveLocation` Blackboard key to fully separate decision making from movement execution
- Added decision lock timing to prevent rapid oscillation between movement actions
- Added extensive runtime debug logging for movement intent and distance evaluation

### Changed

- Refactored Engage behavior to rely on movement intent branches instead of direct pursuit
- Reworked Behavior Tree structure to support mutually exclusive movement execution paths
- Updated combat movement to be fully data-driven by AI archetype tuning values
- Improved separation between decision services and execution tasks

### Fixed

- Fixed AI continuously overshooting the player and clustering at zero distance
- Fixed backpedal logic failing due to invalid or constantly changing destinations
- Fixed movement jitter caused by combat state and movement intent fighting each other
- Fixed edge cases where movement actions could never resolve due to decorator conflicts


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

- Initial AI sandbox project setup in Unreal Engine 5.7 using C++
- Core AI controller responsible for perception, blackboard state, and behavior execution
- Behavior Tree and Blackboard-driven AI structure
- Basic patrol behavior using random reachable navigation points
- Custom Behavior Tree task for selecting reachable patrol locations
- AI Perception setup in C++ with sight and hearing
- Filtering so only the player can become a valid perception target
- Blackboard state for target tracking and visibility
- Memory tracking for last known player location and time last sensed
- Basic investigation behavior when line of sight is lost or a sound is detected
- Explicit logic to end search behavior and return to patrol
- Use of observer aborts to allow behaviors to interrupt each other
- Integration of Unreal’s Game Animation Sample for locomotion and animation
