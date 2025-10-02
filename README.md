# system-cockpit

## Architecture

┌─────────────────────┐
│  System Resources   │
│  (CPU, RAM, etc.)   │
└──────────┬──────────┘
           │
           ▼
   ┌────────────────────┐
   │ Data Collector     │
   │ (C++ Class)        │
   └─┬──────────────┬───┘
     │              │
     ▼              ▼
┌─────────────┐  ┌────────────────┐
│  D-Bus      │  │ Direct Access  │
│  Interface  │  │ (from GUI)     │
└─────┬───────┘  └───────┬────────┘
      │                  │
      ▼                  │
┌─────────────────────────────┐
│ GUI Dashboard (Qt)          │
│ - Display                   │
│ - Diagrams                  │
│ - Live Updates              │
└─────────────────────────────┘