# C++ Inventory & UI System (Unreal Engine 5)
A modular gameplay inventory system built in Unreal Engine 5 using C++ and UMG.
The project demonstrates data-driven UI, weapon integration, and real-time inventory updates suitable for shooter-style gameplay.


---

## Features

-  Inventory system implemented in C++
-  Weapon pickup integration (auto-add to inventory)
-  UI built with UMG (ListView-based)
-  Real-time UI updates via delegates
-  Data-driven item structure (ID, name, icon, quantity)
-  Modular and reusable component design
---

## Overview

This project focuses on building a **clean connection between gameplay systems and UI**.

Instead of directly controlling UI from gameplay code, the system uses:

- `UInventoryComponent` as a single source of truth
- Event-driven updates (`OnInventoryChanged`)
- UI that reacts to data changes rather than controlling them

---

## Architecture
Weapon Pickup  
↓  
InventoryComponent (C++)  
↓ (Event)  
Inventory Widget (UMG)  
↓  
ListView Entry Widgets  


### Key idea:
> UI does not store state — it reflects the current state of the inventory.

---

## Core Classes

### `UInventoryComponent`
- Stores item data (`TArray<FItemData>`)
- Handles adding items and stacking
- Broadcasts updates to UI

### `FItemData`
- `ItemID` — logical identifier
- `DisplayName` — UI text
- `Icon` — UI image
- `Quantity` — stack count

### `AShooterCharacter`
- Owns the inventory component
- Adds items when weapons are picked up

### UI (UMG)
- `WBP_Inventory` — main inventory widget
- `WBP_ItemEntry` — ListView entry widget
- Uses UObject wrapper for ListView compatibility

---

## Technologies

- Unreal Engine 5
- C++
- UMG (UI system)
- Blueprint (UI layer)

---

## How it works

1. Player picks up a weapon  
2. Weapon is added to `InventoryComponent`  
3. `OnInventoryChanged` event is triggered  
4. UI rebuilds automatically  
5. ListView displays updated items  

---

## Setup

1. Clone the repository
2. Open `.uproject` file
3. Build the project (Visual Studio / Rider)
4. Run in Unreal Editor

---


##  Purpose

This project was created as a **portfolio piece** to demonstrate:

- C++ gameplay programming in Unreal Engine
- UI systems (UMG)
- Data-driven architecture
- Clean separation of logic and presentation

---

##  Notes

- Designed with scalability in mind (easy to extend with new item types)
- Safe UObject usage (prevents common UI crashes)
- Follows Unreal Engine best practices for UI + gameplay interaction

---

## License

For educational and portfolio use.
